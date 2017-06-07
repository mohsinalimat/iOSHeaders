//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXWidgetBarDelegate-Protocol.h>
#import <PhotosUICore/PXWidgetDelegate-Protocol.h>

@class NSHashTable, NSString, PXScrollViewController, PXTilingController, PXWidgetBar, PXWidgetCompositionSpec;
@protocol PXWidget, PXWidgetCompositionElementDelegate;

@interface PXWidgetCompositionElement : NSObject <PXWidgetBarDelegate, PXWidgetDelegate>
{
    struct {
        _Bool respondsToTransitionToViewControllerPreferredTransitionType;
        _Bool respondsToRequestViewControllerDismissalAnimated;
    } _delegateFlags;
    _Bool _isPerformingChanges;
    _Bool _shouldLoadWidgetContent;
    _Bool __isNotifyingWidget;
    id <PXWidget> _widget;
    PXScrollViewController *_scrollViewController;
    id <PXWidgetCompositionElementDelegate> _delegate;
    PXWidgetCompositionSpec *_spec;
    PXTilingController *_animationOptionsOriginatingTilingController;
    NSHashTable *__observers;
    PXWidgetBar *__header;
    PXWidgetBar *__footer;
    struct CGSize _widgetContentSize;
}

+ (id)elementWithWidget:(id)arg1 scrollViewController:(id)arg2;
+ (Class)footerBarClass;
+ (Class)headerBarClass;
@property(nonatomic, setter=_setNotifyingWidget:) _Bool _isNotifyingWidget; // @synthesize _isNotifyingWidget=__isNotifyingWidget;
@property(readonly, nonatomic) PXWidgetBar *_footer; // @synthesize _footer=__footer;
@property(readonly, nonatomic) PXWidgetBar *_header; // @synthesize _header=__header;
@property(readonly, nonatomic) NSHashTable *_observers; // @synthesize _observers=__observers;
@property(readonly, nonatomic) PXTilingController *animationOptionsOriginatingTilingController; // @synthesize animationOptionsOriginatingTilingController=_animationOptionsOriginatingTilingController;
@property(nonatomic) _Bool shouldLoadWidgetContent; // @synthesize shouldLoadWidgetContent=_shouldLoadWidgetContent;
@property(nonatomic) struct CGSize widgetContentSize; // @synthesize widgetContentSize=_widgetContentSize;
@property(retain, nonatomic) PXWidgetCompositionSpec *spec; // @synthesize spec=_spec;
@property(nonatomic) __weak id <PXWidgetCompositionElementDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak PXScrollViewController *scrollViewController; // @synthesize scrollViewController=_scrollViewController;
@property(readonly, nonatomic) id <PXWidget> widget; // @synthesize widget=_widget;
- (void).cxx_destruct;
- (void)widgetBarDidSelectDisclosureAffordance:(id)arg1;
- (void)widgetBarDidSelectSubtitle:(id)arg1;
- (_Bool)widget:(id)arg1 requestViewControllerDismissalAnimated:(_Bool)arg2;
- (_Bool)widget:(id)arg1 transitionToViewController:(struct NSObject *)arg2 withTransitionType:(long long)arg3;
- (long long)widgetDefaultContentViewAnchoringTypeForDisclosureHeightChange:(id)arg1;
- (void)widgetInvalidateContentLayoutStyle:(id)arg1;
- (void)widgetInvalidateContentViewAnchoringType:(id)arg1;
- (void)widgetRequestFocus:(id)arg1;
- (void)widgetHasLoadedContentDataDidChange:(id)arg1;
- (void)widgetPreferredContentHeightForWidthDidChange:(id)arg1;
- (void)widgetLocalizedDisclosureTitleDidChange:(id)arg1;
- (void)widgetLocalizedCaptionDidChange:(id)arg1;
- (void)widgetLocalizedSubtitleDidChange:(id)arg1;
- (void)widgetLocalizedTitleDidChange:(id)arg1;
- (void)widget:(id)arg1 animateChanges:(CDUnknownBlockType)arg2 withAnimationOptions:(id)arg3;
- (id)widgetExtendedTraitCollection:(id)arg1;
- (struct NSObject *)widgetViewControllerHostingWidget:(id)arg1;
- (id)widgetScrollViewControllerHostingWidget:(id)arg1;
- (struct NSObject *)widgetViewHostingGestureRecognizers:(id)arg1;
- (void)_performChanges:(CDUnknownBlockType)arg1 withAnimationOptions:(id)arg2;
- (void)_updateFooter;
- (void)_invalidateFooter;
- (void)_updateHeader;
- (void)_invalidateHeader;
- (void)_performContentChangeWhenSafe:(CDUnknownBlockType)arg1;
- (void)_notifyWidgetUsingBlock:(CDUnknownBlockType)arg1;
- (void)saveAnchoring;
@property(readonly, nonatomic) PXTilingController *footerTilingController;
@property(readonly, nonatomic) PXTilingController *headerTilingController;
@property(readonly, nonatomic) PXTilingController *contentTilingController;
- (void)unregisterObserver:(id)arg1;
- (void)registerObserver:(id)arg1;
- (void)prepare;
- (id)initWithWidget:(id)arg1 scrollViewController:(id)arg2;
- (id)init;
- (id)extendedTraitCollection;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

