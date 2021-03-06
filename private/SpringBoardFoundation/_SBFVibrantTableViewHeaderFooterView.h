//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewHeaderFooterView.h>

@class NSString, UIView, _UIBackdropView;

@interface _SBFVibrantTableViewHeaderFooterView : UITableViewHeaderFooterView
{
    _UIBackdropView *_backdrop;
    UIView *_plusDView;
    _Bool _wantsPlusDLayer;
    long long _graphicsQuality;
    NSString *_backdropGroupName;
}

+ (id)defaultBackgroundColorForGraphicsQuality:(long long)arg1;
@property(nonatomic) _Bool wantsPlusDLayer; // @synthesize wantsPlusDLayer=_wantsPlusDLayer;
@property(copy, nonatomic) NSString *backdropGroupName; // @synthesize backdropGroupName=_backdropGroupName;
@property(nonatomic) long long graphicsQuality; // @synthesize graphicsQuality=_graphicsQuality;
- (void).cxx_destruct;
- (void)setFloating:(_Bool)arg1;
- (long long)initialGraphicsQuality;
- (id)initWithCoder:(id)arg1;
- (id)initWithReuseIdentifier:(id)arg1;

@end

