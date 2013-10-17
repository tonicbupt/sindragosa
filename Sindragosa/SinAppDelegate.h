//
//  SinAppDelegate.h
//  Sindragosa
//
//  Created by tonic on 13-10-17.
//  Copyright (c) 2013年 tonic. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface SinAppDelegate : NSObject <NSApplicationDelegate>

@property (assign) IBOutlet NSWindow *window;

@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (weak) IBOutlet NSTextField *nameField;
@property (weak) IBOutlet NSScrollView *showField;


- (IBAction)saveAction:(id)sender;
- (IBAction)buttonClicked:(id)sender;

@end
