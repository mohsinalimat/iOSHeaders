//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSMutableDictionary;

@interface NCMaterialButton : UIButton
{
    NSMutableDictionary *_styling;
    NSMutableDictionary *_imageViewStyling;
}

@property(retain, nonatomic) NSMutableDictionary *imageViewStyling; // @synthesize imageViewStyling=_imageViewStyling;
@property(retain, nonatomic) NSMutableDictionary *styling; // @synthesize styling=_styling;
- (void).cxx_destruct;
- (void)_applyImageViewStyling;
- (void)_applyButtonStyling;
- (void)_applyStyling;
- (void)_setFlagsRelatedToState:(unsigned long long)arg1 to:(_Bool)arg2;
- (void)setImageViewStyling:(id)arg1 forState:(unsigned long long)arg2;
- (void)setStyling:(id)arg1 forState:(unsigned long long)arg2;
- (void)setSelected:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setEnabled:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

