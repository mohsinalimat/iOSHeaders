//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Navigation/NSCoding-Protocol.h>
#import <Navigation/NSObject-Protocol.h>

@class NSArray, NSString;
@protocol GEOServerFormatTokenPriceValue, GEOTransitArtworkDataSource;

@protocol GEOServerFormatToken <NSObject, NSCoding>
@property(readonly, nonatomic) NSArray *timeStampValues;
@property(readonly, nonatomic) id <GEOTransitArtworkDataSource> artworkValue;
@property(readonly, nonatomic) id <GEOServerFormatTokenPriceValue> priceValue;
@property(readonly, nonatomic) NSString *stringValue;
@property(readonly, nonatomic) NSArray *value3s;
@property(readonly, nonatomic) unsigned int value2;
@property(readonly, nonatomic) unsigned int value1;
@property(readonly, nonatomic) NSString *token;
@property(readonly, nonatomic) long long type;
@end

