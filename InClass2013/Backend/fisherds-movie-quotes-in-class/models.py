

from google.appengine.ext import ndb
from endpoints_proto_datastore.ndb.model import EndpointsModel

class MovieQuote(EndpointsModel):
    _message_fields_schema = ('id', 'movie_title', 'quote', 'last_touch_date_time')
    movie_title = ndb.StringProperty()
    quote = ndb.StringProperty()
    last_touch_date_time = ndb.DateTimeProperty(auto_now=True)