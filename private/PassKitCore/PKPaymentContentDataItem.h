//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PassKitCore/PKPaymentDataItem.h>

@class PKPaymentContentItem;

@interface PKPaymentContentDataItem : PKPaymentDataItem
{
    PKPaymentContentItem *_contentItem;
}

+ (_Bool)supportsMultipleItems;
+ (long long)dataType;
@property(readonly, nonatomic) PKPaymentContentItem *contentItem; // @synthesize contentItem=_contentItem;
- (void).cxx_destruct;
- (_Bool)isValidWithError:(id *)arg1;
- (id)initWithContentItem:(id)arg1;

@end

