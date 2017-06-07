//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUIResourceRequest.h>

#import <StoreKitUI/NSCopying-Protocol.h>

@class NSArray, NSString;
@protocol SKUIItemRequestDelegate;

@interface SKUIItemResourceRequest : SKUIResourceRequest <NSCopying>
{
    id <SKUIItemRequestDelegate> _delegate;
    NSString *_imageProfile;
    NSArray *_itemIdentifiers;
    NSString *_keyProfile;
}

@property(copy, nonatomic) NSString *keyProfile; // @synthesize keyProfile=_keyProfile;
@property(copy, nonatomic) NSArray *itemIdentifiers; // @synthesize itemIdentifiers=_itemIdentifiers;
@property(copy, nonatomic) NSString *imageProfile; // @synthesize imageProfile=_imageProfile;
@property(nonatomic) __weak id <SKUIItemRequestDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)newLoadOperation;
- (void)finishWithResource:(id)arg1;

@end

