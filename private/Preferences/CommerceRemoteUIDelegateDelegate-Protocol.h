//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/NSObject-Protocol.h>

@class CommerceRemoteUIDelegate, NSError, RUIObjectModel, RUIPage;

@protocol CommerceRemoteUIDelegateDelegate <NSObject>
- (void)commerceDelegate:(CommerceRemoteUIDelegate *)arg1 didCompleteWithError:(NSError *)arg2;
- (void)commerceDelegateDidCancel:(CommerceRemoteUIDelegate *)arg1;
- (void)commerceDelegate:(CommerceRemoteUIDelegate *)arg1 loadDidFailWithError:(NSError *)arg2;
- (void)commerceDelegate:(CommerceRemoteUIDelegate *)arg1 willPresentObjectModel:(RUIObjectModel *)arg2 page:(RUIPage *)arg3;
@end

