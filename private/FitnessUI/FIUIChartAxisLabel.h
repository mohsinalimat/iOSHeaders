//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIColor;

@interface FIUIChartAxisLabel : NSObject
{
    _Bool _useReversePlacement;
    NSString *_text;
    id _location;
    UIColor *_labelColor;
    UIColor *_shadowColor;
    double _shadowBlur;
    struct CGSize _shadowOffset;
}

@property(nonatomic) double shadowBlur; // @synthesize shadowBlur=_shadowBlur;
@property(nonatomic) struct CGSize shadowOffset; // @synthesize shadowOffset=_shadowOffset;
@property(nonatomic) UIColor *shadowColor; // @synthesize shadowColor=_shadowColor;
@property(retain, nonatomic) UIColor *labelColor; // @synthesize labelColor=_labelColor;
@property(nonatomic) _Bool useReversePlacement; // @synthesize useReversePlacement=_useReversePlacement;
@property(retain, nonatomic) id location; // @synthesize location=_location;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (id)description;

@end

