//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface CMKAvalancheIndicatorView : UIView
{
    _Bool _showsWhenStarted;
    UIView *__backgroundView;
    UILabel *__countLabel;
    long long __numberOfPhotos;
}

@property(readonly, nonatomic) long long _numberOfPhotos; // @synthesize _numberOfPhotos=__numberOfPhotos;
@property(readonly, nonatomic) UILabel *_countLabel; // @synthesize _countLabel=__countLabel;
@property(readonly, nonatomic) UIView *_backgroundView; // @synthesize _backgroundView=__backgroundView;
@property(nonatomic) _Bool showsWhenStarted; // @synthesize showsWhenStarted=_showsWhenStarted;
- (void).cxx_destruct;
- (void)_updateCountLabelWithNumberOfPhotos;
- (void)_performCaptureAnimation;
- (void)reset;
- (void)incrementWithCaptureAnimation:(_Bool)arg1;
- (void)finishIncrementingWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_commonCMKAvalancheIndicatorViewInitialization;

@end

