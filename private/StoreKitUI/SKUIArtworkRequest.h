//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUIResourceRequest.h>

#import <StoreKitUI/NSCopying-Protocol.h>

@class NSString, NSURL, SSVURLDataConsumer;
@protocol SKUIArtworkRequestDelegate;

@interface SKUIArtworkRequest : SKUIResourceRequest <NSCopying>
{
    SSVURLDataConsumer *_dataConsumer;
    id <SKUIArtworkRequestDelegate> _delegate;
    NSString *_imageName;
    NSURL *_url;
}

@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_url;
@property(copy, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property(nonatomic) __weak id <SKUIArtworkRequestDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SSVURLDataConsumer *dataConsumer; // @synthesize dataConsumer=_dataConsumer;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)newLoadOperation;
- (void)finishWithResource:(id)arg1;
- (_Bool)cachesInMemory;
- (id)description;

@end

