//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PhotoLibrary/UINavigationBarDelegate-Protocol.h>

@class NSString, UINavigationBar;

@interface PLInteractiveNavigationControllerView : UIView <UINavigationBarDelegate>
{
    UIView *_top;
    UIView *_bottom;
    UIView *_interactive;
    UIView *_overlay;
    UINavigationBar *_navBar;
    UIView *_header;
    UIView *_footer;
    long long _orientation;
    struct {
        unsigned int transitioning:1;
        unsigned int headerViewIsVisible:1;
        unsigned int footerViewIsVisible:1;
    } _controllerViewFlags;
}

@property(retain, nonatomic) UIView *footerView; // @synthesize footerView=_footer;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_header;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottom;
@property(retain, nonatomic) UIView *topView; // @synthesize topView=_top;
@property(readonly, retain, nonatomic) UINavigationBar *navigationBar; // @synthesize navigationBar=_navBar;
- (void)setInterfaceOrientation:(long long)arg1;
- (void)setTopViewAlpha:(double)arg1;
- (void)setOverlayView:(id)arg1;
- (id)interactiveView;
- (void)setInteractiveView:(id)arg1;
- (void)setInteractiveView:(id)arg1 removePrevious:(_Bool)arg2;
- (void)transitionDidEnd;
- (void)transitionWillBegin;
- (void)layoutSubviews;
- (void)_adjustViewFrame:(id)arg1;
@property(nonatomic, getter=footerViewIsHidden) _Bool footerViewHidden;
@property(nonatomic, getter=headerViewIsHidden) _Bool headerViewHidden;
- (void)setFooterViewHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setHeaderViewHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

