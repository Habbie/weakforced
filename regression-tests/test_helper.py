from datetime import datetime
import os
import requests
import urlparse
import unittest

DAEMON = os.environ.get('DAEMON', 'authoritative')


class ApiTestCase(unittest.TestCase):

    def setUp(self):
        # TODO: config
        self.server_address = '127.0.0.1'
        self.server_port = int(os.environ.get('WEBPORT', '8084'))
        self.server_url = 'http://%s:%s/' % (self.server_address, self.server_port)
        self.session = requests.Session()
        self.session.auth = ('foo', os.environ.get('APIKEY', 'super'))
        self.session.keep_alive = False
        self.session.headers = {"Connection": "close"} # FIXME this obscures a bug in wforce http
#        self.session.headers = {'X-API-Key': os.environ.get('APIKEY', 'changeme-key'), 'Origin': 'http://%s:%s' % (self.server_address, self.server_port)}

    def url(self, relative_url):
        return urlparse.urljoin(self.server_url, relative_url)

    def assert_success_json(self, result):
        try:
            result.raise_for_status()
        except:
            print result.content
            raise
        self.assertEquals(result.headers['Content-Type'], 'application/json')
