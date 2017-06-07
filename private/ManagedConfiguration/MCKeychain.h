//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface MCKeychain : NSObject
{
}

+ (_Bool)itemExistsInKeychain:(void *)arg1;
+ (void)removeItemWithPersistentID:(id)arg1;
+ (id)saveItem:(void *)arg1 withLabel:(id)arg2 group:(id)arg3;
+ (struct __SecIdentity *)copyIdentityWithPersistentID:(id)arg1;
+ (struct __SecCertificate *)copyCertificateWithPersistentID:(id)arg1;
+ (void *)copyItemWithPersistentID:(id)arg1;
+ (void)removeItemForService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 group:(id)arg5;
+ (_Bool)setData:(id)arg1 forService:(id)arg2 account:(id)arg3 label:(id)arg4 description:(id)arg5 access:(void *)arg6 group:(id)arg7 outError:(id *)arg8;
+ (_Bool)setData:(id)arg1 forService:(id)arg2 account:(id)arg3 label:(id)arg4 description:(id)arg5 access:(void *)arg6 outError:(id *)arg7;
+ (_Bool)setData:(id)arg1 forService:(id)arg2 account:(id)arg3 label:(id)arg4 description:(id)arg5 outError:(id *)arg6;
+ (id)dataFromService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 group:(id)arg5 outError:(id *)arg6;
+ (id)dataFromService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 outError:(id *)arg5;
+ (_Bool)setString:(id)arg1 forService:(id)arg2 account:(id)arg3 label:(id)arg4 description:(id)arg5 outError:(id *)arg6;
+ (_Bool)setString:(id)arg1 forService:(id)arg2 account:(id)arg3 label:(id)arg4 description:(id)arg5 access:(void *)arg6 group:(id)arg7 outError:(id *)arg8;
+ (_Bool)setString:(id)arg1 forService:(id)arg2 account:(id)arg3 label:(id)arg4 description:(id)arg5 group:(id)arg6 outError:(id *)arg7;
+ (id)stringFromService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 group:(id)arg5 outError:(id *)arg6;
+ (id)stringFromService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 outError:(id *)arg5;
+ (_Bool)itemExistsInKeychain:(void *)arg1 useSystemKeychain:(_Bool)arg2;
+ (void)removeItemWithPersistentID:(id)arg1 useSystemKeychain:(_Bool)arg2;
+ (id)saveItem:(void *)arg1 withLabel:(id)arg2 group:(id)arg3 useSystemKeychain:(_Bool)arg4;
+ (struct __SecIdentity *)copyIdentityWithPersistentID:(id)arg1 useSystemKeychain:(_Bool)arg2;
+ (struct __SecCertificate *)copyCertificateWithPersistentID:(id)arg1 useSystemKeychain:(_Bool)arg2;
+ (void *)copyItemWithPersistentID:(id)arg1 useSystemKeychain:(_Bool)arg2;
+ (void)removeItemForService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 useSystemKeychain:(_Bool)arg5 group:(id)arg6;
+ (id)dataFromService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 group:(id)arg5 useSystemKeychain:(_Bool)arg6 outError:(id *)arg7;
+ (id)dataFromService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 useSystemKeychain:(_Bool)arg5 outError:(id *)arg6;
+ (_Bool)setData:(id)arg1 forService:(id)arg2 account:(id)arg3 label:(id)arg4 description:(id)arg5 access:(void *)arg6 group:(id)arg7 useSystemKeychain:(_Bool)arg8 outError:(id *)arg9;
+ (_Bool)setData:(id)arg1 forService:(id)arg2 account:(id)arg3 label:(id)arg4 description:(id)arg5 access:(void *)arg6 useSystemKeychain:(_Bool)arg7 outError:(id *)arg8;
+ (_Bool)setData:(id)arg1 forService:(id)arg2 account:(id)arg3 label:(id)arg4 description:(id)arg5 useSystemKeychain:(_Bool)arg6 outError:(id *)arg7;
+ (_Bool)setString:(id)arg1 forService:(id)arg2 account:(id)arg3 label:(id)arg4 description:(id)arg5 access:(void *)arg6 group:(id)arg7 useSystemKeychain:(_Bool)arg8 outError:(id *)arg9;
+ (_Bool)setString:(id)arg1 forService:(id)arg2 account:(id)arg3 label:(id)arg4 description:(id)arg5 group:(id)arg6 useSystemKeychain:(_Bool)arg7 outError:(id *)arg8;
+ (_Bool)setString:(id)arg1 forService:(id)arg2 account:(id)arg3 label:(id)arg4 description:(id)arg5 useSystemKeychain:(_Bool)arg6 outError:(id *)arg7;
+ (id)stringFromService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 group:(id)arg5 useSystemKeychain:(_Bool)arg6 outError:(id *)arg7;
+ (id)stringFromService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 useSystemKeychain:(_Bool)arg5 outError:(id *)arg6;
+ (struct __CFDictionary *)_newQueryWithService:(id)arg1 account:(id)arg2 label:(id)arg3 description:(id)arg4 group:(id)arg5 useSystemKeychain:(_Bool)arg6 outError:(id *)arg7;

@end

