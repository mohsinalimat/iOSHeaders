//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ITMLKit/IKViewElement.h>

@class IKActivityIndicatorElement, IKCheckMarkElement, IKOrdinalElement, IKProgressIndicatorElement, IKTextElement, NSArray, NSString;

@interface IKListItemLockupElement : IKViewElement
{
}

@property(readonly, retain, nonatomic) IKViewElement *relatedContent;
@property(readonly, retain, nonatomic) IKOrdinalElement *ordinal;
@property(readonly, retain, nonatomic) IKCheckMarkElement *checkMark;
@property(readonly, retain, nonatomic) IKActivityIndicatorElement *activityIndicator;
@property(readonly, retain, nonatomic) IKProgressIndicatorElement *progressIndicator;
@property(readonly, retain, nonatomic) IKTextElement *decorationLabel;
@property(readonly, retain, nonatomic) NSArray *decorationImages;
@property(readonly, retain, nonatomic) IKTextElement *subtitle;
@property(readonly, retain, nonatomic) IKTextElement *title;
@property(readonly, retain, nonatomic) NSArray *images;
@property(readonly, nonatomic) NSString *itemHeight;

@end

