//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PhotosUICore/PXReusableObject-Protocol.h>
#import <PhotosUICore/PXUIViewBasicTile-Protocol.h>
#import <PhotosUICore/PXUIWidgetFooterViewDelegate-Protocol.h>

@class NSString, PXUIWidgetFooterView, UIButton, UIColor;
@protocol PXActionRowTileDelegate;

@interface PXActionRowTile : UIView <PXUIViewBasicTile, PXReusableObject, PXUIWidgetFooterViewDelegate>
{
    NSString *_title;
    long long _idiom;
    id <PXActionRowTileDelegate> _delegate;
    UIColor *__normalBackgroundColor;
    UIColor *__highlightedBackgroundColor;
    UIButton *__button;
    PXUIWidgetFooterView *__footer;
}

@property(readonly, nonatomic) PXUIWidgetFooterView *_footer; // @synthesize _footer=__footer;
@property(readonly, nonatomic) UIButton *_button; // @synthesize _button=__button;
@property(readonly, nonatomic) UIColor *_highlightedBackgroundColor; // @synthesize _highlightedBackgroundColor=__highlightedBackgroundColor;
@property(readonly, nonatomic) UIColor *_normalBackgroundColor; // @synthesize _normalBackgroundColor=__normalBackgroundColor;
@property(nonatomic) __weak id <PXActionRowTileDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long idiom; // @synthesize idiom=_idiom;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)widgetFooterView:(id)arg1 didSelectDisclosure:(id)arg2;
- (void)didApplyGeometry:(struct PXTileGeometry)arg1 withUserData:(id)arg2;
- (void)handleButtonTap:(id)arg1;
- (void)prepareForReuse;
- (void)becomeReusable;
@property(readonly, nonatomic) UIView *view;
- (void)tintColorDidChange;
- (void)_updateButtonTitle;
@property(nonatomic, getter=isEnabled) _Bool enabled;
- (void)_setupDecoratedButton;
- (void)_setupButton;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
