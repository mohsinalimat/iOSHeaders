//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIVisualEffectView.h>

@class NSString, UIView;

@interface _TVVisualEffectView : UIVisualEffectView
{
    NSString *_savedGroupName;
    UIView *_backdropLayerHostView;
}

+ (void)disableBackdropLayerHostView:(id)arg1;
+ (void)enableBackdropLayerHostView:(id)arg1;
+ (id)backdropLayerHostViews;
@property(nonatomic) __weak UIView *backdropLayerHostView; // @synthesize backdropLayerHostView=_backdropLayerHostView;
@property(readonly, copy, nonatomic) NSString *savedGroupName; // @synthesize savedGroupName=_savedGroupName;
- (void).cxx_destruct;
- (void)didMoveToWindow;
- (void)backdropLayerHostViewDisabled:(id)arg1;
- (void)backdropLayerHostViewEnabled:(id)arg1;
- (void)_setGroupName:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithEffect:(id)arg1;

@end

