//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUIViewElement.h>

@class NSArray, NSString, SKUIActivityIndicatorViewElement, SKUINavigationBarViewElement;

@interface SKUIChartsTemplateViewElement : SKUIViewElement
{
    NSString *_type;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *type;
@property(readonly, nonatomic) SKUINavigationBarViewElement *navigationBarElement;
@property(readonly, nonatomic) NSArray *columns;
@property(readonly, nonatomic) SKUIActivityIndicatorViewElement *activityIndicator;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end

