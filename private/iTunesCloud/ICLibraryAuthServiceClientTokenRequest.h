//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesCloud/ICRequestOperation.h>

@class ICLibraryAuthServiceClientTokenResponse, ICStoreRequestContext;

@interface ICLibraryAuthServiceClientTokenRequest : ICRequestOperation
{
    ICStoreRequestContext *_storeRequestContext;
    ICLibraryAuthServiceClientTokenResponse *_response;
}

- (void).cxx_destruct;
- (void)execute;
- (void)performRequestWithResponseHandler:(CDUnknownBlockType)arg1;
- (id)initWithStoreRequestContext:(id)arg1;

@end

