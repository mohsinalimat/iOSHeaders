//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UIBarAppearanceStorage.h>

@class NSDictionary, NSMutableDictionary, NSNumber, NSString, UIImage, _UIBarButtonItemAppearanceStorage;

__attribute__((visibility("hidden")))
@interface _UINavigationBarAppearanceStorage : _UIBarAppearanceStorage
{
    NSDictionary *textAttributes;
    NSMutableDictionary *titleVerticalAdjustmentsForBarMetrics;
    UIImage *shadowImage;
    _Bool hidesShadow;
    long long barMetrics;
    UIImage *backIndicatorImage;
    UIImage *backIndicatorTransitionMaskImage;
    NSNumber *backIndicatorLeftMargin;
    _Bool reversesShadowOffset;
    _UIBarButtonItemAppearanceStorage *buttonAppearanceStorage;
    _Bool _deferShadowToSearchBar;
    long long defaultBarMetrics;
    long long activeBarMetrics;
    NSString *_backdropViewGroupName;
}

+ (long long)typicalBarPosition;
@property(retain, nonatomic) NSString *backdropViewGroupName; // @synthesize backdropViewGroupName=_backdropViewGroupName;
@property(nonatomic) _Bool deferShadowToSearchBar; // @synthesize deferShadowToSearchBar=_deferShadowToSearchBar;
@property(retain, nonatomic) NSNumber *backIndicatorLeftMargin; // @synthesize backIndicatorLeftMargin;
@property(retain, nonatomic) UIImage *backIndicatorTransitionMaskImage; // @synthesize backIndicatorTransitionMaskImage;
@property(retain, nonatomic) UIImage *backIndicatorImage; // @synthesize backIndicatorImage;
@property(nonatomic) long long activeBarMetrics; // @synthesize activeBarMetrics;
@property(nonatomic) long long defaultBarMetrics; // @synthesize defaultBarMetrics;
@property(retain, nonatomic) UIImage *shadowImage; // @synthesize shadowImage;
@property(nonatomic) _Bool reversesShadowOffset; // @synthesize reversesShadowOffset;
@property(copy, nonatomic) NSDictionary *textAttributes; // @synthesize textAttributes;
@property(nonatomic) _Bool hidesShadow; // @synthesize hidesShadow;
- (void).cxx_destruct;
- (id)representativeImageForIdiom:(long long)arg1;
@property(readonly, nonatomic) _UIBarButtonItemAppearanceStorage *barButtonAppearanceStorage;
@property(readonly, nonatomic) _UIBarButtonItemAppearanceStorage *_barButtonAppearanceStorage;
- (double)titleVerticalAdjustmentForBarMetrics:(long long)arg1;
- (void)setTitleVerticalAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
@property(readonly, nonatomic) UIImage *miniPromptBackgroundImage;
@property(readonly, nonatomic) UIImage *promptBackgroundImage;
@property(readonly, nonatomic) UIImage *miniBackgroundImage;
@property(readonly, nonatomic) UIImage *backgroundImage;

@end

