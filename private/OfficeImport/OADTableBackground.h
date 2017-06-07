//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <OfficeImport/OADEffectsParent-Protocol.h>

@class NSArray, NSString, OADFill;

__attribute__((visibility("hidden")))
@interface OADTableBackground : NSObject <OADEffectsParent>
{
    OADFill *mFill;
    NSArray *mEffects;
}

@property(readonly, copy) NSString *description;
- (_Bool)hasEffects;
- (void)setEffects:(id)arg1;
- (id)effects;
- (void)setFill:(id)arg1;
- (id)fill;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
