/* This file was generated by the ServiceGenerator.
 * The ServiceGenerator is Copyright (c) 2013 Google Inc.
 */

//
//  GTLMoviequotesMovieQuote.m
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   moviequotes/v1
// Description:
//   Movie Quotes API
// Classes:
//   GTLMoviequotesMovieQuote (0 custom class methods, 4 custom properties)

#import "GTLMoviequotesMovieQuote.h"

// ----------------------------------------------------------------------------
//
//   GTLMoviequotesMovieQuote
//

@implementation GTLMoviequotesMovieQuote
@dynamic identifier, lastTouchDateTime, movieTitle, quote;

+ (NSDictionary *)propertyToJSONKeyMap {
  NSDictionary *map =
    [NSDictionary dictionaryWithObjectsAndKeys:
      @"id", @"identifier",
      @"last_touch_date_time", @"lastTouchDateTime",
      @"movie_title", @"movieTitle",
      nil];
  return map;
}

@end