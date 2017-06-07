//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class PXWidgetComposition;
@protocol NSObject, PXWidget;

@protocol PXWidgetCompositionDelegate <NSObject>
- (struct NSObject *)widgetComposition:(PXWidgetComposition *)arg1 viewControllerHostingWidget:(id <PXWidget>)arg2;

@optional
- (void)widgetComposition:(PXWidgetComposition *)arg1 didUpdateCompositionWithDefaultAnimationOptions:(id <NSObject>)arg2;
- (void)widgetComposition:(PXWidgetComposition *)arg1 widgetHasLoadedContentDataDidChange:(id <PXWidget>)arg2;
- (_Bool)widgetComposition:(PXWidgetComposition *)arg1 widget:(id <PXWidget>)arg2 transitionToViewController:(struct NSObject *)arg3 withTransitionType:(long long)arg4;
- (long long)widgetComposition:(PXWidgetComposition *)arg1 loadingPriorityForWidget:(id <PXWidget>)arg2;
- (_Bool)widgetComposition:(PXWidgetComposition *)arg1 shouldUseEdgeToEdgeLayoutForWidget:(id <PXWidget>)arg2;
- (_Bool)widgetComposition:(PXWidgetComposition *)arg1 requestViewControllerDismissalAnimated:(_Bool)arg2;
@end

