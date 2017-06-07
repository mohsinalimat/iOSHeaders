//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SafariShared/WBSFormAutoFillItem.h>

@class NSURLCredential, NSURLProtectionSpace;

@interface WBSCredentialMatch : WBSFormAutoFillItem
{
    NSURLCredential *_credential;
    NSURLProtectionSpace *_protectionSpace;
}

@property(readonly, nonatomic) NSURLProtectionSpace *protectionSpace; // @synthesize protectionSpace=_protectionSpace;
@property(readonly, nonatomic) NSURLCredential *credential; // @synthesize credential=_credential;
- (void).cxx_destruct;
- (id)completion;
- (id)initWithCredential:(id)arg1 protectionSpace:(id)arg2;
- (id)initWithCredential:(id)arg1;

@end

