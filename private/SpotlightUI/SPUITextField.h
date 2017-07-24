//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SearchUI/SearchUISearchField.h>

@class NSArray, SPSearchEntity, SPUIHeaderBlurView, UIButton, UIImage, UIView;

@interface SPUITextField : SearchUISearchField
{
    _Bool _ignoreRepresentedObjectUpdate;
    NSArray *_suggestions;
    UIImage *_clearButtonImage;
    UIButton *_microphoneButton;
    SPUIHeaderBlurView *_blurView;
    UIView *_tintView;
    struct CGSize _imageSize;
}

+ (Class)_backgroundViewClass;
@property _Bool ignoreRepresentedObjectUpdate; // @synthesize ignoreRepresentedObjectUpdate=_ignoreRepresentedObjectUpdate;
@property(retain) UIView *tintView; // @synthesize tintView=_tintView;
@property(retain) SPUIHeaderBlurView *blurView; // @synthesize blurView=_blurView;
@property(retain) UIButton *microphoneButton; // @synthesize microphoneButton=_microphoneButton;
@property(retain) UIImage *clearButtonImage; // @synthesize clearButtonImage=_clearButtonImage;
@property struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(retain) NSArray *suggestions; // @synthesize suggestions=_suggestions;
- (void).cxx_destruct;
- (void)updateWithColor:(id)arg1;
@property(readonly) SPSearchEntity *searchEntity;
- (void)updateRepresentedObjects:(id)arg1;
- (void)setText:(id)arg1;
- (id)text;
- (void)updateContentSizeCategory;
- (struct CGSize)intrinsicContentSize;
- (id)init;

@end

