//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIActivityItemProvider.h>

@class SKUIClientContext, SKUIShareTemplateViewElement;

@interface SKUIShareTemplateTextItemProvider : UIActivityItemProvider
{
    SKUIClientContext *_clientContext;
    SKUIShareTemplateViewElement *_templateElement;
}

- (void).cxx_destruct;
- (id)item;
- (id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2;
- (id)initWithTemplateElement:(id)arg1 clientContext:(id)arg2;

@end

