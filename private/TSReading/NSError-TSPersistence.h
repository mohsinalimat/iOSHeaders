//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSError.h>

@interface NSError (TSPersistence)
+ (id)tsp_recoverableErrorWithError:(id)arg1;
+ (id)tsp_recoverableErrorWithCode:(long long)arg1;
+ (id)tsp_errorWithCode:(long long)arg1 underlyingError:(id)arg2;
+ (id)tsp_errorWithCode:(long long)arg1;
- (_Bool)tsp_isRecoverable;
@end

