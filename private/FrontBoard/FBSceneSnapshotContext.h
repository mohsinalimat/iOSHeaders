//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <FrontBoard/BSDescriptionProviding-Protocol.h>

@class FBSSceneSettings, NSDate, NSSet, NSString;

@interface FBSceneSnapshotContext : NSObject <BSDescriptionProviding>
{
    NSString *_sceneID;
    struct CGRect _frame;
    _Bool _opaque;
    double _scale;
    NSSet *_layersToExclude;
    FBSSceneSettings *_settings;
    long long _orientation;
    NSDate *_expirationDate;
}

+ (id)contextWithFBSContext:(id)arg1;
@property(retain, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(copy, nonatomic) NSSet *layersToExclude; // @synthesize layersToExclude=_layersToExclude;
@property(copy, nonatomic) FBSSceneSettings *settings; // @synthesize settings=_settings;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(nonatomic, getter=isOpaque) _Bool opaque; // @synthesize opaque=_opaque;
@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(readonly, copy, nonatomic) NSString *sceneID; // @synthesize sceneID=_sceneID;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithFBSContext:(id)arg1;
- (id)initWithScene:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

