//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSArray, NSDate, NSNumber, NSString, SAMovieV2MovieDetailSnippet;

@interface SAMovieV2MovieListCell : SADomainObject
{
}

+ (id)movieListCellWithDictionary:(id)arg1 context:(id)arg2;
+ (id)movieListCell;
@property(copy, nonatomic) NSDate *theatricalReleaseDate;
@property(copy, nonatomic) NSString *rating;
@property(copy, nonatomic) NSNumber *qualityRating;
@property(copy, nonatomic) NSArray *posterImages;
@property(copy, nonatomic) NSString *movieName;
@property(retain, nonatomic) SAMovieV2MovieDetailSnippet *movieDetailSnippet;
@property(copy, nonatomic) NSArray *displayableShowtimes;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

