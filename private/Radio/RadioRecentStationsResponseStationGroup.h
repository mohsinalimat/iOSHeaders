//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface RadioRecentStationsResponseStationGroup : NSObject
{
    NSDictionary *_responseDictionary;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *stationDictionaries;
@property(readonly, copy, nonatomic) NSString *localizedTitle;
@property(readonly, nonatomic, getter=isActive) _Bool active;
- (id)initWithResponseDictionary:(id)arg1;

@end

