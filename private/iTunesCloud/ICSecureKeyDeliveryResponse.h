//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ICStoreDialogResponse, NSData, NSDate, NSError;

@interface ICSecureKeyDeliveryResponse : NSObject
{
    ICStoreDialogResponse *_dialog;
    NSError *_serverError;
    NSDate *_rentalExpirationDate;
    NSDate *_rentalPlaybackStartDate;
    NSDate *_renewalDate;
    NSData *_serverPlaybackContextData;
    NSData *_contentKeyContextData;
}

@property(copy, nonatomic) NSData *contentKeyContextData; // @synthesize contentKeyContextData=_contentKeyContextData;
@property(copy, nonatomic) NSData *serverPlaybackContextData; // @synthesize serverPlaybackContextData=_serverPlaybackContextData;
@property(copy, nonatomic) NSDate *renewalDate; // @synthesize renewalDate=_renewalDate;
@property(copy, nonatomic) NSDate *rentalPlaybackStartDate; // @synthesize rentalPlaybackStartDate=_rentalPlaybackStartDate;
@property(copy, nonatomic) NSDate *rentalExpirationDate; // @synthesize rentalExpirationDate=_rentalExpirationDate;
@property(copy, nonatomic) NSError *serverError; // @synthesize serverError=_serverError;
@property(copy, nonatomic) ICStoreDialogResponse *dialog; // @synthesize dialog=_dialog;
- (void).cxx_destruct;
- (void)finishAssetResourceLoadingRequest:(id)arg1 withError:(id)arg2;

@end
