//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface PMLSpotlightReference : NSObject
{
    NSArray *_itemIdentifiers;
    NSString *_domainIdentifier;
    NSString *_bundleIdentifier;
}

+ (id)referenceWithBundleId:(id)arg1 domainId:(id)arg2 itemIds:(id)arg3;
@property(readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, nonatomic) NSString *domainIdentifier; // @synthesize domainIdentifier=_domainIdentifier;
@property(readonly, nonatomic) NSArray *itemIdentifiers; // @synthesize itemIdentifiers=_itemIdentifiers;
- (void).cxx_destruct;
- (id)initWithBundleId:(id)arg1 domainId:(id)arg2 itemIds:(id)arg3;

@end

