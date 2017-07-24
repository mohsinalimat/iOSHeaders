//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, PKPaymentApplication, PKPaymentPass;

@interface PKPaymentPreferenceCardEntry : NSObject
{
    _Bool _shouldShowCardUI;
    _Bool _isSelectable;
    PKPaymentPass *_pass;
    PKPaymentApplication *_paymentApplication;
    NSString *_displayName;
}

@property(nonatomic) _Bool isSelectable; // @synthesize isSelectable=_isSelectable;
@property(nonatomic) _Bool shouldShowCardUI; // @synthesize shouldShowCardUI=_shouldShowCardUI;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) PKPaymentApplication *paymentApplication; // @synthesize paymentApplication=_paymentApplication;
@property(retain, nonatomic) PKPaymentPass *pass; // @synthesize pass=_pass;
- (void).cxx_destruct;

@end

