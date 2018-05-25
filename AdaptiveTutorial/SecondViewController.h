//
//  ViewController.h
//  AdaptiveTutorial
//
//  Created by maharaj on 14/05/18.
//  Copyright © 2018 maharaj. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SecondViewController : UIViewController<UITableViewDelegate,UITableViewDataSource>

@property (weak, nonatomic) IBOutlet UITableView *tableView;
@end

