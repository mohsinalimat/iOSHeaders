//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, WLKServerConfiguration;
@protocol OS_dispatch_queue;

@interface WLKChannelUtilities : NSObject
{
    _Bool _offLineMode;
    WLKServerConfiguration *_config;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSDictionary *_channelsByBundleID;
}

+ (id)_validiTunesBundles;
+ (_Bool)isItunesBundleID:(id)arg1;
+ (id)sharedInstance;
@property(readonly, copy, nonatomic) NSDictionary *channelsByBundleID; // @synthesize channelsByBundleID=_channelsByBundleID;
- (void).cxx_destruct;
- (id)_serverConfiguration;
@property(readonly, copy, nonatomic) NSArray *orderedChannels;
- (id)channelIDForBundleID:(id)arg1;
- (id)channelForBundleID:(id)arg1;
- (id)channelForID:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *channelsByID;
- (id)initOffline;
- (id)init;
- (id)_init;

@end

