/* This file was generated by the ServiceGenerator.
 * The ServiceGenerator is Copyright (c) 2013 Google Inc.
 */

//
//  GTLQueryMoviequotes.h
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   moviequotes/v1
// Description:
//   Movie Quotes API
// Classes:
//   GTLQueryMoviequotes (3 custom class methods, 5 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLQuery.h"
#else
  #import "GTLQuery.h"
#endif

@class GTLMoviequotesMovieQuote;

@interface GTLQueryMoviequotes : GTLQuery

//
// Parameters valid on all methods.
//

// Selector specifying which fields to include in a partial response.
@property (copy) NSString *fields;

//
// Method-specific parameters; see the comments below for more information.
//
// identifier property maps to 'id' in JSON (to avoid Objective C's 'id').
@property (assign) long long identifier;
@property (assign) long long limit;
@property (copy) NSString *order;
@property (copy) NSString *pageToken;

#pragma mark -
#pragma mark "moviequote" methods
// These create a GTLQueryMoviequotes object.

// Method: moviequotes.moviequote.delete
// Delete a MovieQuote.
//  Authorization scope(s):
//   kGTLAuthScopeMoviequotesUserinfoEmail
// Fetches a GTLMoviequotesMovieQuote.
+ (id)queryForMoviequoteDeleteWithIdentifier:(long long)identifier;

// Method: moviequotes.moviequote.insert
// Insert the quote into the database.
//  Authorization scope(s):
//   kGTLAuthScopeMoviequotesUserinfoEmail
// Fetches a GTLMoviequotesMovieQuote.
+ (id)queryForMoviequoteInsertWithObject:(GTLMoviequotesMovieQuote *)object;

// Method: moviequotes.moviequote.list
// Get a list of movie quotes.
//  Optional:
//   limit: long long
//   order: NSString
//   pageToken: NSString
//  Authorization scope(s):
//   kGTLAuthScopeMoviequotesUserinfoEmail
// Fetches a GTLMoviequotesMovieQuoteCollection.
+ (id)queryForMoviequoteList;

@end