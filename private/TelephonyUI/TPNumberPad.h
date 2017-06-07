//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSArray, NSMutableArray;

@interface TPNumberPad : UIControl
{
    NSMutableArray *_buttons;
    _Bool _numberButtonsEnabled;
}

@property(nonatomic) _Bool numberButtonsEnabled; // @synthesize numberButtonsEnabled=_numberButtonsEnabled;
- (void).cxx_destruct;
- (void)buttonLongPressed:(id)arg1;
- (void)buttonCancelled:(id)arg1;
- (void)buttonDown:(id)arg1;
- (void)buttonUp:(id)arg1;
- (void)buttonTapped:(id)arg1;
- (void)buttonLongPressedViaGesture:(id)arg1;
- (void)_addButton:(id)arg1;
- (void)_layoutGrid;
- (void)_setBackgroundAlphaOnButton:(id)arg1 alpha:(double)arg2;
- (double)_backgroundAlphaOfButton:(id)arg1;
@property(nonatomic) double buttonBackgroundAlpha;
- (void)replaceButton:(id)arg1 atIndex:(unsigned long long)arg2;
@property(retain) NSArray *buttons; // @dynamic buttons;
- (struct CGSize)intrinsicContentSize;
- (void)handleCurrentLocaleDidChangeNotification:(id)arg1;
- (void)dealloc;
- (id)initWithButtons:(id)arg1;

@end

