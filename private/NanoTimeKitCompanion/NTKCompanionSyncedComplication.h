//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface NTKCompanionSyncedComplication : NSObject
{
    NSString *_companionBundleIdentifier;
    NSString *_fallbackName;
    NSString *_localizedName;
    NSString *_clientIdentifier;
    NSString *_appBundleIdentifier;
    NSArray *_supportedFamilies;
}

+ (id)_stocksComplication;
@property(readonly, nonatomic) NSArray *supportedFamilies; // @synthesize supportedFamilies=_supportedFamilies;
@property(readonly, nonatomic) NSString *appBundleIdentifier; // @synthesize appBundleIdentifier=_appBundleIdentifier;
@property(readonly, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *localizedName;
- (id)initWithDictionary:(id)arg1 supportedFamilies:(id)arg2;

@end

