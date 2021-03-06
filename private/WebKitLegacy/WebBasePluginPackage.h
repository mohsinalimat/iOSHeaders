//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;

__attribute__((visibility("hidden")))
@interface WebBasePluginPackage : NSObject
{
    NSMutableSet *pluginDatabases;
    struct String path;
    struct PluginInfo pluginInfo;
    struct RetainPtr<__CFBundle *> cfBundle;
    CDUnknownFunctionPointerType BP_CreatePluginMIMETypesPreferences;
}

+ (id)pluginWithPath:(id)arg1;
+ (void)initialize;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct String)bundleVersion;
- (struct String)bundleIdentifier;
- (void)wasRemovedFromPluginDatabase:(id)arg1;
- (void)wasAddedToPluginDatabase:(id)arg1;
- (unsigned int)versionNumber;
- (_Bool)isNativeLibraryData:(id)arg1;
- (_Bool)isJavaPlugIn;
- (_Bool)isQuickTimePlugIn;
- (id)MIMETypeForExtension:(const struct String *)arg1;
- (_Bool)supportsMIMEType:(const struct String *)arg1;
- (_Bool)supportsExtension:(const struct String *)arg1;
- (const struct PluginInfo *)pluginInfo;
- (const struct String *)path;
- (void)dealloc;
- (_Bool)load;
- (_Bool)getPluginInfoFromPLists;
- (id)_objectForInfoDictionaryKey:(id)arg1;
- (id)pListForPath:(id)arg1 createFile:(_Bool)arg2;
- (void)createPropertyListFile;
- (void)unload;
- (id)initWithPath:(id)arg1;

@end

