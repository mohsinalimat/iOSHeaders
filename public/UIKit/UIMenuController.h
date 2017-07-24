//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/UICalloutBarDelegate-Protocol.h>

@class NSArray, NSString, UIView;

@interface UIMenuController : NSObject <UICalloutBarDelegate>
{
    struct CGRect _targetRect;
    UIView *_targetView;
    long long _arrowDirection;
}

+ (id)sharedMenuController;
@property(nonatomic) long long arrowDirection; // @synthesize arrowDirection=_arrowDirection;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGRect menuFrame;
- (void)update;
@property(copy, nonatomic) NSArray *menuItems;
- (void)_setTargetRect:(struct CGRect)arg1 inView:(id)arg2 animated:(_Bool)arg3;
- (void)setTargetRect:(struct CGRect)arg1 inView:(id)arg2;
- (void)_windowWillRotate:(id)arg1;
- (void)setMenuVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)_menuHidden;
@property(nonatomic, getter=isMenuVisible) _Bool menuVisible;
- (void)dealloc;
- (id)init;
- (_Bool)_updateAnimated:(_Bool)arg1 checkVisible:(_Bool)arg2;
- (void)calloutBar:(id)arg1 didFinishAnimation:(id)arg2;
- (void)calloutBar:(id)arg1 willStartAnimation:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

