//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Navigation/GEOServerFormatToken-Protocol.h>

@class NSArray, NSString;
@protocol GEOServerFormatTokenPriceValue, GEOTransitArtworkDataSource;

__attribute__((visibility("hidden")))
@interface _TempToken : NSObject <GEOServerFormatToken>
{
    unsigned int _value1;
    unsigned int _value2;
    long long _type;
    NSString *_token;
    NSArray *_value3s;
    NSString *_stringValue;
    id <GEOServerFormatTokenPriceValue> _priceValue;
    id <GEOTransitArtworkDataSource> _artworkValue;
    NSArray *_timeStampValues;
}

@property(retain, nonatomic) NSArray *timeStampValues; // @synthesize timeStampValues=_timeStampValues;
@property(retain, nonatomic) id <GEOTransitArtworkDataSource> artworkValue; // @synthesize artworkValue=_artworkValue;
@property(retain, nonatomic) id <GEOServerFormatTokenPriceValue> priceValue; // @synthesize priceValue=_priceValue;
@property(retain, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
@property(readonly, nonatomic) NSArray *value3s; // @synthesize value3s=_value3s;
@property(nonatomic) unsigned int value2; // @synthesize value2=_value2;
@property(nonatomic) unsigned int value1; // @synthesize value1=_value1;
@property(retain, nonatomic) NSString *token; // @synthesize token=_token;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

