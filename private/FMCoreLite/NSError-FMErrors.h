//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSError.h>

@interface NSError (FMErrors)
+ (id)fm_genericError;
+ (id)fm_cancelledError;
+ (id)fm_timeoutError;
+ (id)fm_errorWithCode:(unsigned long long)arg1;
- (_Bool)fm_isCancelledError;
- (_Bool)fm_isTimeoutError;
@end
