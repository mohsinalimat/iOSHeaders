//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <TemplateKit/TLKObservable-Protocol.h>

@class NSString, TLKObserver;

@interface TLKView : UIView <TLKObservable>
{
    unsigned long long _style;
    UIView *_containerView;
    TLKObserver *_viewObserver;
}

+ (Class)layerClass;
@property(retain) TLKObserver *viewObserver; // @synthesize viewObserver=_viewObserver;
@property(retain) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)dealloc;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1 withHorizontalFittingPriority:(float)arg2 verticalFittingPriority:(float)arg3;
- (_Bool)supportsAsynchronousMeasurement;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (_Bool)isLayoutSizeDependentOnPerpendicularAxis;
- (void)disableUnbatchedUpdates;
- (void)performBatchUpdates:(CDUnknownBlockType)arg1;
- (id)viewForLastBaselineLayout;
- (id)viewForFirstBaselineLayout;
- (id)observableProperties;
- (void)styleDidChange:(unsigned long long)arg1;
- (void)observedPropertiesChanged;
- (void)setContainer:(id)arg1 withInsets:(struct UIEdgeInsets)arg2;
- (void)setContainerWithDefaultInsets:(id)arg1;
- (void)layoutMarginsDidChange;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
