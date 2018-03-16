//
//  ViewController.swift
//  PythonHotfixDemoSwift
//
//  Created by Peter Yo on 3月/16/18.
//  Copyright © 2018年 Peter Yo. All rights reserved.
//

import UIKit

class ViewController: PAAppViewController {
//class ViewController: UIViewController {

    override func viewDidLoad() {
        super.viewDidLoad()

      guard let path = Bundle.main.path(forResource: "main", ofType: "py", inDirectory: "script"),
        let script = try? String(contentsOfFile: path, encoding: .utf8) else {
          return
      }
      
      print(script)
//      self.scriptPath = path
      
      (PythonInterpreter.sharedInterpreter() as! PythonInterpreter).run(script, asFile: path)
    }

    override func didReceiveMemoryWarning() {
        super.didReceiveMemoryWarning()
        // Dispose of any resources that can be recreated.
    }
    

    /*
    // MARK: - Navigation

    // In a storyboard-based application, you will often want to do a little preparation before navigation
    override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
        // Get the new view controller using segue.destinationViewController.
        // Pass the selected object to the new view controller.
    }
    */

}
