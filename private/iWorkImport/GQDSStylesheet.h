//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class GQDRoot;

__attribute__((visibility("hidden")))
@interface GQDSStylesheet : NSObject
{
    GQDRoot *mRoot;
    GQDSStylesheet *mParent;
    struct __CFDictionary *mIdentifiedStyles;
    struct __CFArray *mStylesNeedingParentResolutionInParent;
    struct __CFArray *mStylesNeedingParentResolution;
}

- (struct __CFArray *)retainedArrayOfIdentifiedStyles;
- (void)resolveStyleParents;
- (void)addStyle:(id)arg1 needingParentResolution:(const char *)arg2 resolveInParent:(_Bool)arg3;
- (id)styleWithXmlUid:(const char *)arg1;
- (id)styleWithIdentifier:(const char *)arg1;
- (_Bool)addStyle:(id)arg1 withOwnedXmlUid:(char *)arg2;
- (void)addStyle:(id)arg1 withOwnedIdentifier:(char *)arg2;
- (id)parent;
- (void)dealloc;
- (id)initWithRoot:(id)arg1;

@end

