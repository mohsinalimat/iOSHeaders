//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/NSObject-Protocol.h>

@class GEOMapItemAttribution, NSArray, NSString;

@protocol GEOEncyclopedicInfo <NSObject>
@property(readonly, nonatomic) GEOMapItemAttribution *encyclopedicAttribution;
@property(readonly, nonatomic) NSArray *factoids;
@property(readonly, nonatomic) _Bool hasPairOfFactoids;
@property(readonly, nonatomic) NSString *textBlockText;
@property(readonly, nonatomic) NSString *textBlockTitle;
@property(readonly, nonatomic) _Bool hasTextBlock;
@end

