//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@class UIColor, UITraitCollection, UIView;
@protocol UIActionSheetPresentationControllerDismissActionView;

@protocol UIActionSheetPresentationControllerVisualStyle <NSObject>
@property(readonly) UIView<UIActionSheetPresentationControllerDismissActionView> *dismissActionView;
@property(readonly) double cornerRadius;
@property(readonly) UIColor *dimmingViewColor;
@property(readonly) double dismissToContentSpacing;
@property(readonly) struct UIEdgeInsets contentInsets;
@property(retain) UITraitCollection *traitCollection;
@end

