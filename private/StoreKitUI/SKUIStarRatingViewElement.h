//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUIViewElement.h>

@class SKUIViewElementText;

@interface SKUIStarRatingViewElement : SKUIViewElement
{
    float _ratingValue;
    SKUIViewElementText *_text;
    long long _starType;
    _Bool _enabled;
}

@property(readonly, nonatomic) float ratingValue; // @synthesize ratingValue=_ratingValue;
@property(readonly, nonatomic) long long starType; // @synthesize starType=_starType;
- (void).cxx_destruct;
- (id)applyUpdatesWithElement:(id)arg1;
@property(readonly, nonatomic) SKUIViewElementText *text; // @synthesize text=_text;
- (_Bool)isEnabled;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end

