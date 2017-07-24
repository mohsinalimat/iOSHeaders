//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FrontBoardServices/BSDescriptionProviding-Protocol.h>
#import <FrontBoardServices/NSCopying-Protocol.h>

@class NSString;

@interface FBSSceneClientIdentity : NSObject <NSCopying, BSDescriptionProviding>
{
    _Bool _local;
    NSString *_bundleIdentifier;
}

+ (id)identityForBundleID:(id)arg1;
+ (id)localIdentity;
@property(readonly, nonatomic, getter=isLocal) _Bool local; // @synthesize local=_local;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithBundleID:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

