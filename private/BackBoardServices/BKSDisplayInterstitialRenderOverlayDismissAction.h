//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <BackBoardServices/BKSDisplayRenderOverlayDismissAction-Protocol.h>
#import <BackBoardServices/BSDescriptionProviding-Protocol.h>

@class BKSDisplayRenderOverlayDescriptor, NSString;

@interface BKSDisplayInterstitialRenderOverlayDismissAction : NSObject <BSDescriptionProviding, BKSDisplayRenderOverlayDismissAction>
{
    BKSDisplayRenderOverlayDescriptor *_overlayDescriptor;
}

- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (void)dismissWithAnimation:(id)arg1;
- (void)dismiss;
@property(readonly, nonatomic) BKSDisplayRenderOverlayDescriptor *overlayDescriptor;
- (void)dealloc;
- (id)initWithDescriptor:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

