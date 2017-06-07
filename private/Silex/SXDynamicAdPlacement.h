//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface SXDynamicAdPlacement : NSObject
{
    _Bool _allowMediumRectangle;
    NSString *_referenceComponentIdentifier;
    NSArray *_path;
    unsigned long long _bannerType;
    struct _SXConvertibleValue _bottomMargin;
    struct _SXConvertibleValue _topMargin;
    struct _NSRange _characterRange;
}

@property(nonatomic) struct _NSRange characterRange; // @synthesize characterRange=_characterRange;
@property(nonatomic) _Bool allowMediumRectangle; // @synthesize allowMediumRectangle=_allowMediumRectangle;
@property(nonatomic) unsigned long long bannerType; // @synthesize bannerType=_bannerType;
@property(nonatomic) struct _SXConvertibleValue topMargin; // @synthesize topMargin=_topMargin;
@property(nonatomic) struct _SXConvertibleValue bottomMargin; // @synthesize bottomMargin=_bottomMargin;
@property(readonly, nonatomic) NSArray *path; // @synthesize path=_path;
@property(readonly, nonatomic) NSString *referenceComponentIdentifier; // @synthesize referenceComponentIdentifier=_referenceComponentIdentifier;
- (void).cxx_destruct;
- (id)description;
- (id)initWithReferenceComponentIdentifier:(id)arg1 andPath:(id)arg2;

@end
