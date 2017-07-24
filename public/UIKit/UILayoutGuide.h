//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSCoding-Protocol.h>
#import <UIKit/NSISVariableDelegate-Protocol.h>
#import <UIKit/UILayoutItem_Internal-Protocol.h>
#import <UIKit/_UILayoutItem-Protocol.h>

@class NSArray, NSISVariable, NSLayoutDimension, NSLayoutRect, NSLayoutXAxisAnchor, NSLayoutYAxisAnchor, NSMapTable, NSString, UITraitCollection, UIView;

@interface UILayoutGuide : NSObject <UILayoutItem_Internal, _UILayoutItem, NSISVariableDelegate, NSCoding>
{
    NSLayoutRect *_layoutRect;
    struct CGRect _layoutFrame;
    _Bool _isLayoutFrameValid;
    UIView *_unsafeUnretainedOwningView;
    _Bool _allowOwningViewSetting;
    _Bool _isLockedToOwningView;
    _Bool _useManualLayoutFrame;
    _Bool __allowsNegativeDimensions;
    _Bool __shouldBeArchived;
    UIView *_owningView;
    NSString *_identifier;
    NSISVariable *_minXVariable;
    NSISVariable *_minYVariable;
    NSISVariable *_boundsWidthVariable;
    NSISVariable *_boundsHeightVariable;
    NSArray *_systemConstraints;
    NSMapTable *_stashedLayoutVariableObservations;
    NSLayoutXAxisAnchor *_leadingAnchor;
    NSLayoutXAxisAnchor *_trailingAnchor;
    NSLayoutXAxisAnchor *_leftAnchor;
    NSLayoutXAxisAnchor *_rightAnchor;
    NSLayoutYAxisAnchor *_topAnchor;
    NSLayoutYAxisAnchor *_bottomAnchor;
    NSLayoutDimension *_widthAnchor;
    NSLayoutDimension *_heightAnchor;
    NSLayoutXAxisAnchor *_centerXAnchor;
    NSLayoutYAxisAnchor *_centerYAnchor;
}

+ (double)_defaultSpacingBetweenGuidesForResolvingSymbolicConstant;
@property(nonatomic, setter=_setShouldBeArchived:) _Bool _shouldBeArchived; // @synthesize _shouldBeArchived=__shouldBeArchived;
@property(nonatomic, setter=_setAllowsNegativeDimensions:) _Bool _allowsNegativeDimensions; // @synthesize _allowsNegativeDimensions=__allowsNegativeDimensions;
@property(readonly, retain, nonatomic) NSMapTable *_stashedLayoutVariableObservations; // @synthesize _stashedLayoutVariableObservations;
@property(readonly, nonatomic) _Bool _useManualLayoutFrame; // @synthesize _useManualLayoutFrame;
@property(retain, nonatomic, setter=_setSystemConstraints:) NSArray *_systemConstraints; // @synthesize _systemConstraints;
@property(nonatomic, getter=_isLockedToOwningView, setter=_setLockedToOwningView:) _Bool _lockedToOwningView; // @synthesize _lockedToOwningView=_isLockedToOwningView;
@property(readonly, retain, nonatomic) NSISVariable *_boundsHeightVariable; // @synthesize _boundsHeightVariable;
@property(readonly, retain, nonatomic) NSISVariable *_boundsWidthVariable; // @synthesize _boundsWidthVariable;
@property(readonly, retain, nonatomic) NSISVariable *_minYVariable; // @synthesize _minYVariable;
@property(readonly, retain, nonatomic) NSISVariable *_minXVariable; // @synthesize _minXVariable;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) __weak UIView *owningView; // @synthesize owningView=_owningView;
@property(nonatomic, setter=_setAllowOwningViewSetting:) _Bool _allowOwningViewSetting; // @synthesize _allowOwningViewSetting;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSLayoutYAxisAnchor *centerYAnchor; // @synthesize centerYAnchor=_centerYAnchor;
@property(readonly, nonatomic) NSLayoutXAxisAnchor *centerXAnchor; // @synthesize centerXAnchor=_centerXAnchor;
@property(readonly, nonatomic) NSLayoutDimension *heightAnchor; // @synthesize heightAnchor=_heightAnchor;
@property(readonly, nonatomic) NSLayoutDimension *widthAnchor; // @synthesize widthAnchor=_widthAnchor;
@property(readonly, nonatomic) NSLayoutYAxisAnchor *bottomAnchor; // @synthesize bottomAnchor=_bottomAnchor;
@property(readonly, nonatomic) NSLayoutYAxisAnchor *topAnchor; // @synthesize topAnchor=_topAnchor;
@property(readonly, nonatomic) NSLayoutXAxisAnchor *rightAnchor; // @synthesize rightAnchor=_rightAnchor;
@property(readonly, nonatomic) NSLayoutXAxisAnchor *leftAnchor; // @synthesize leftAnchor=_leftAnchor;
@property(readonly, nonatomic) NSLayoutXAxisAnchor *trailingAnchor; // @synthesize trailingAnchor=_trailingAnchor;
@property(readonly, nonatomic) NSLayoutXAxisAnchor *leadingAnchor; // @synthesize leadingAnchor=_leadingAnchor;
- (id)_createAnchorWithClass:(Class)arg1 attribute:(long long)arg2;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)nsis_descriptionOfVariable:(id)arg1;
- (void)nsis_valueOfVariable:(id)arg1 didChangeInEngine:(id)arg2;
- (_Bool)nsis_valueOfVariableIsUserObservable:(id)arg1;
- (_Bool)nsis_shouldIntegralizeVariable:(id)arg1;
- (id)_uili_observableLayoutEngineForBaseFrameVariables:(_Bool)arg1;
- (_Bool)_uili_requiresObservationForVariable:(id)arg1;
- (void)_uili_removeLayoutVariableObservationsOnlyToSupportTAMICChange:(_Bool)arg1;
- (void)_uili_stashLayoutVariableObservation:(id)arg1 forVariable:(id)arg2;
- (id)_uili_existingLayoutVariables;
- (id)_uili_existingBaseFrameVariables;
- (void *)_referenceView;
- (_Bool)nsli_isRTL;
- (_Bool)nsli_isLegalConstraintItem;
- (_Bool)nsli_isCollectingConstraintChangesForLaterCoordinatedFlush:(id)arg1;
- (id)nsli_contentHeightVariable;
- (id)nsli_contentWidthVariable;
- (id)nsli_heightVariable;
- (id)nsli_boundsHeightVariable;
- (id)nsli_widthVariable;
- (id)nsli_boundsWidthVariable;
- (id)nsli_minYVariable;
- (id)nsli_minXVariable;
- (_Bool)nsli_lowerAttribute:(int)arg1 intoExpression:(id)arg2 withCoefficient:(double)arg3 container:(id)arg4;
- (_Bool)nsli_lowerAttribute:(int)arg1 intoExpression:(id)arg2 withCoefficient:(double)arg3 forConstraint:(id)arg4;
- (id)nsli_layoutMarginsItem;
- (double)nsli_marginOffsetForAttribute:(long long)arg1;
- (id)nsli_installedConstraints;
- (_Bool)nsli_removeConstraint:(id)arg1;
- (void)nsli_addConstraint:(id)arg1;
- (_Bool)nsli_isFlipped;
- (unsigned long long)nsli_autoresizingMask;
- (_Bool)nsli_descriptionIncludesPointer;
- (id)nsli_description;
- (_Bool)nsli_resolvedValue:(double *)arg1 forSymbolicConstant:(id)arg2 inConstraint:(id)arg3 error:(id *)arg4;
- (id)nsli_superitem;
- (struct CGSize)nsli_convertSizeFromEngineSpace:(struct CGSize)arg1;
- (struct CGSize)nsli_convertSizeToEngineSpace:(struct CGSize)arg1;
- (id)nsli_layoutEngine;
- (void)_snipReferencingConstraints;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)_layoutRect;
@property(readonly, nonatomic) struct CGRect layoutFrame;
- (void)_invalidateLayoutFrame;
- (void)_updateLayoutFrameInOwningView:(id)arg1 fromEngine:(id)arg2;
- (void)_setManualLayoutFrame:(struct CGRect)arg1;
- (void)_setOwningView:(id)arg1;
- (void)_owningViewIsDeallocating;
- (id)_autolayoutTraceAtLevel:(long long)arg1 recursively:(_Bool)arg2;
- (id)_descriptionForLayoutTrace;
@property(readonly, nonatomic) _Bool hasAmbiguousLayout;
- (id)constraintsAffectingLayoutForAxis:(long long)arg1;
- (void)traitCollectionDidChange:(id)arg1;
@property(readonly, nonatomic) UITraitCollection *traitCollection;
- (void)_ui_removeFromParentLayoutItem;
- (void)_ui_insertSubLayoutItem:(id)arg1 atIndex:(long long)arg2;
- (void)_ui_addSubLayoutItem:(id)arg1;
- (void)_ui_addToView:(id)arg1 atIndex:(long long)arg2;
@property(readonly, nonatomic) UIView *_ui_view;
@property(readonly, nonatomic) UIView *_ui_superview;
@property(readonly, nonatomic) struct CGRect _ui_frame;
@property(readonly, nonatomic) struct CGRect _ui_bounds;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(setter=nsli_setPiercingToken:) unsigned long long nsli_piercingToken;
@property(readonly) Class superclass;

@end

